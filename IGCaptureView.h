
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGCaptureViewDelegate;
@class AVCaptureVideoPreviewLayer, IGMediaCaptureButton, IGTapButton, IGVideoProgressView, IGVideoRecordingTimerView, IGVideoRecordedClipsProgressView, IGVideoCaptureDeleteButton, IGCameraFocusIndicator, UITapGestureRecognizer, UILongPressGestureRecognizer, UIView, UIScrollView, IGCameraAccessPromptView, NSString;

@interface IGCaptureView : UIView <UIScrollViewDelegate> {

	char _videoClipDeleteButtonHidden;
	char _cameraModeLocked;
	id<IGCaptureViewDelegate> _delegate;
	AVCaptureVideoPreviewLayer* _previewLayer;
	IGMediaCaptureButton* _photoCaptureButton;
	IGMediaCaptureButton* _videoCaptureButton;
	IGTapButton* _switchCameraButton;
	IGTapButton* _flashButton;
	IGVideoProgressView* _videoProgressView;
	IGVideoRecordingTimerView* _videoTimerView;
	IGVideoRecordedClipsProgressView* _recordedClipsProgressView;
	IGVideoCaptureDeleteButton* _videoClipDeleteButton;
	int _cameraMode;
	IGCameraFocusIndicator* _focusIndicator;
	UITapGestureRecognizer* _focusGestureRecognizer;
	UILongPressGestureRecognizer* _focusLockGestureRecognizer;
	UIView* _captureView;
	UIScrollView* _scrollView;
	IGCameraAccessPromptView* _accessPromptView;

}

@property (nonatomic,retain) UIView * captureView;                                                        //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * accessPromptView;                                 //@synthesize accessPromptView=_accessPromptView - In the implementation block
@property (assign,nonatomic,__weak) id<IGCaptureViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                                   //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) IGMediaCaptureButton * photoCaptureButton;                                 //@synthesize photoCaptureButton=_photoCaptureButton - In the implementation block
@property (nonatomic,readonly) IGMediaCaptureButton * videoCaptureButton;                                 //@synthesize videoCaptureButton=_videoCaptureButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * switchCameraButton;                                          //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * flashButton;                                                 //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,readonly) IGVideoProgressView * videoProgressView;                                   //@synthesize videoProgressView=_videoProgressView - In the implementation block
@property (nonatomic,readonly) IGVideoRecordingTimerView * videoTimerView;                                //@synthesize videoTimerView=_videoTimerView - In the implementation block
@property (nonatomic,readonly) IGVideoRecordedClipsProgressView * recordedClipsProgressView;              //@synthesize recordedClipsProgressView=_recordedClipsProgressView - In the implementation block
@property (assign,nonatomic) char videoClipDeleteButtonHidden;                                            //@synthesize videoClipDeleteButtonHidden=_videoClipDeleteButtonHidden - In the implementation block
@property (nonatomic,readonly) IGVideoCaptureDeleteButton * videoClipDeleteButton;                        //@synthesize videoClipDeleteButton=_videoClipDeleteButton - In the implementation block
@property (assign,nonatomic) int cameraMode;                                                              //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign,nonatomic) char cameraModeLocked;                                                       //@synthesize cameraModeLocked=_cameraModeLocked - In the implementation block
@property (nonatomic,readonly) IGCameraFocusIndicator * focusIndicator;                                   //@synthesize focusIndicator=_focusIndicator - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * focusGestureRecognizer;                             //@synthesize focusGestureRecognizer=_focusGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * focusLockGestureRecognizer;                   //@synthesize focusLockGestureRecognizer=_focusLockGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCameraPermissionDeniedView;
-(IGTapButton *)switchCameraButton;
-(void)setVideoClipDeleteButtonHidden:(char)arg1 ;
-(char)videoClipDeleteButtonHidden;
-(UITapGestureRecognizer *)focusGestureRecognizer;
-(UILongPressGestureRecognizer *)focusLockGestureRecognizer;
-(IGCameraAccessPromptView *)accessPromptView;
-(void)setAccessPromptView:(IGCameraAccessPromptView *)arg1 ;
-(IGVideoProgressView *)videoProgressView;
-(IGVideoRecordingTimerView *)videoTimerView;
-(IGVideoCaptureDeleteButton *)videoClipDeleteButton;
-(void)setFocusGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setFocusLockGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(IGMediaCaptureButton *)photoCaptureButton;
-(IGMediaCaptureButton *)videoCaptureButton;
-(char)cameraModeLocked;
-(void)setCameraModeLocked:(char)arg1 ;
-(IGVideoRecordedClipsProgressView *)recordedClipsProgressView;
-(void)setCameraMode:(int)arg1 animated:(char)arg2 ;
-(void)setVideoClipDeleteButtonHidden:(char)arg1 animated:(char)arg2 ;
-(void)setProgressViewHidden:(char)arg1 animated:(char)arg2 ;
-(void)setVideoRecordingTimerEnabled:(char)arg1 ;
-(IGCameraFocusIndicator *)focusIndicator;
-(UIView *)captureView;
-(void)setCaptureView:(UIView *)arg1 ;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCaptureViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<IGCaptureViewDelegate>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(IGTapButton *)flashButton;
-(void)setCameraMode:(int)arg1 ;
-(int)cameraMode;
@end

