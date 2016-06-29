
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGQuickCamControlBarDelegate;
@class IGTapButton, IGQuickCamCaptureButton;

@interface IGQuickCamControlBar : UIView {

	int _state;
	id<IGQuickCamControlBarDelegate> _delegate;
	IGTapButton* _switchCameraButton;
	IGQuickCamCaptureButton* _captureButton;

}

@property (nonatomic,retain) IGTapButton * switchCameraButton;                              //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                       //@synthesize captureButton=_captureButton - In the implementation block
@property (assign,nonatomic) int state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)onSwitchCamerasButtonTapped;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)enableCaptureButton:(char)arg1 ;
-(void)setCaptureButtonState:(int)arg1 ;
-(void)setSwitchCameraButtonAccessibilityValue:(id)arg1 ;
-(char)captureButtonEnabled;
-(void)setCaptureButtonVideoRecordProgress:(float)arg1 ;
-(void)setCaptureButtonDelegate:(id)arg1 ;
-(void)enableSwitchCameraButton:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGQuickCamControlBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGQuickCamControlBarDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
@end

