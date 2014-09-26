#include <vcsbase/vcsbaseoutputwindow.h>
using namespace Mercurial::Internal;
using namespace Mercurial;
    Constants::FILELOG,
    Constants::ANNOTATELOG,
    Constants::DIFFLOG,
    Constants::COMMIT_ID,
    VcsBase::VcsBaseSubmitEditorParameters::DiffFiles
    typedef VcsEditorFactory<MercurialEditor> MercurialEditorFactory;

        addAutoReleasedObject(new MercurialEditorFactory(editorParameters + i, m_client, describeSlot));
    addAutoReleasedObject(new VcsSubmitEditorFactory<CommitEditor>(&submitEditorParameters));
    addAutoReleasedObject(new CloneWizardFactory);
    connect(m_client, SIGNAL(parsedStatus(QList<VcsBase::VcsBaseClient::StatusItem>)),
            this, SLOT(showCommitWidget(QList<VcsBase::VcsBaseClient::StatusItem>)));
    VcsBaseOutputWindow *outputWindow = VcsBaseOutputWindow::instance();
    disconnect(m_client, SIGNAL(parsedStatus(QList<VcsBase::VcsBaseClient::StatusItem>)),
               this, SLOT(showCommitWidget(QList<VcsBase::VcsBaseClient::StatusItem>)));
        outputWindow->appendError(tr("There are no changes to commit."));
        VcsBase::VcsBaseOutputWindow::instance()->appendError(saver.errorString());
        outputWindow->appendError(tr("Unable to create an editor for the commit."));
    Core::EditorManager::closeEditor();
#include <QTest>
    MercurialEditor editor(editorParameters + 2, 0);
    editor.testDiffFileResolving();
    MercurialEditor editor(editorParameters, 0);
    editor.testLogResolving(data, "18473:692cbda1eb50", "18472:37100f30590f");
Q_EXPORT_PLUGIN(MercurialPlugin)