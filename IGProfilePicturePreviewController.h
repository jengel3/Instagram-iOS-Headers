
#import <Instagram/IGViewController.h>
#import <Instagram/IGPreviewingAction.h>

@class IGPreviewEventManager, IGUser, IGProfilePictureImageView, NSString;

@interface IGProfilePicturePreviewController : IGViewController <IGPreviewingAction> {

	float _previewWidth;
	IGPreviewEventManager* _logger;
	IGUser* _user;
	IGProfilePictureImageView* _profilePictureImageView;

}

@property (assign,nonatomic) float previewWidth;                                                 //@synthesize previewWidth=_previewWidth - In the implementation block
@property (nonatomic,retain) IGPreviewEventManager * logger;                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profilePictureImageView;              //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGProfilePictureImageView *)profilePictureImageView;
-(id)previewActionBarItems;
-(void)setPreviewWidth:(float)arg1 ;
-(float)previewWidth;
-(IGPreviewEventManager *)logger;
-(void)setLogger:(IGPreviewEventManager *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
@end

