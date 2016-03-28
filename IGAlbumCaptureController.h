
#import <Instagram/IGAlbumCameraViewControllerDelegate.h>

@class IGAlbumCameraViewController, NSString;

@interface IGAlbumCaptureController : NSObject <IGAlbumCameraViewControllerDelegate> {

	IGAlbumCameraViewController* _cameraViewController;
	NSString* _albumStoryPK;

}

@property (nonatomic,retain) IGAlbumCameraViewController * cameraViewController;              //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (nonatomic,retain) NSString * albumStoryPK;                                         //@synthesize albumStoryPK=_albumStoryPK - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)albumCameraViewControllerDidDismiss:(id)arg1 ;
-(void)albumCameraViewControllerDidTapStartNewAlbum:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2 ;
-(void)albumCameraViewControllerLibraryDidLoad:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)handleAlbumShared:(id)arg1 ;
-(NSString *)albumStoryPK;
-(void)setAlbumStoryPK:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)resetState;
-(void)setCameraViewController:(IGAlbumCameraViewController *)arg1 ;
-(IGAlbumCameraViewController *)cameraViewController;
@end

