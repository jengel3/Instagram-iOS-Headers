
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGAlbumSaveMediaRequestDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>

@protocol IGAlbumItemType, IGAlbumItemActionsControllerDelegate;
@class IGAlbumSaveMediaRequest, IGUserSession, UIViewController, NSString;

@interface IGAlbumItemActionsController : NSObject <IGActionSheetDelegate, IGAlbumSaveMediaRequestDelegate, IGCameraNavigationControllerDelegate> {

	char _shouldPresentShareFlowAfterSave;
	IGAlbumSaveMediaRequest* _saveRequest;
	id<IGAlbumItemType> _item;
	IGUserSession* _userSession;
	UIViewController* _hostingViewController;
	id<IGAlbumItemActionsControllerDelegate> _delegate;

}

@property (nonatomic,retain) IGAlbumSaveMediaRequest * saveRequest;                                 //@synthesize saveRequest=_saveRequest - In the implementation block
@property (assign,nonatomic) char shouldPresentShareFlowAfterSave;                                  //@synthesize shouldPresentShareFlowAfterSave=_shouldPresentShareFlowAfterSave - In the implementation block
@property (nonatomic,retain) id<IGAlbumItemType> item;                                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) IGUserSession * userSession;                                           //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostingViewController;                       //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumItemActionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItem:(id)arg1 userSession:(id)arg2 hostingViewController:(id)arg3 delegate:(id)arg4 ;
-(void)showViewerOptionsActionSheet;
-(void)setSaveRequest:(IGAlbumSaveMediaRequest *)arg1 ;
-(char)shouldPresentShareFlowAfterSave;
-(void)setShouldPresentShareFlowAfterSave:(char)arg1 ;
-(void)dismissCameraController;
-(void)showDeleteItemAlert;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)saveMediaRequest:(id)arg1 didSaveToCameraRollURL:(id)arg2 ;
-(void)saveMediaRequestDidFailSaving:(id)arg1 ;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(void)showShareActionSheet;
-(IGAlbumSaveMediaRequest *)saveRequest;
-(void)setHostingViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<IGAlbumItemActionsControllerDelegate>)arg1 ;
-(id<IGAlbumItemActionsControllerDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(void)setItem:(id<IGAlbumItemType>)arg1 ;
-(UIViewController *)hostingViewController;
-(IGUserSession *)userSession;
-(void)setUserSession:(IGUserSession *)arg1 ;
@end

