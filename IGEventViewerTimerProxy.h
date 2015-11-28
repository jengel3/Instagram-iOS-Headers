

@class IGEventViewerPhotoPlaybackController;

@interface IGEventViewerTimerProxy : NSObject {

	IGEventViewerPhotoPlaybackController* _controller;

}

@property (assign,nonatomic,__weak) IGEventViewerPhotoPlaybackController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)didFireTimer:(id)arg1 ;
-(IGEventViewerPhotoPlaybackController *)controller;
-(void)setController:(IGEventViewerPhotoPlaybackController *)arg1 ;
@end

