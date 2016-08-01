
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumCameraPermissionViewDelegate;
@class UIVisualEffectView, UILabel, UIButton;

@interface IGAlbumCameraPermissionView : UIView {

	id<IGAlbumCameraPermissionViewDelegate> _delegate;
	UIVisualEffectView* _cameraBlurOverlay;
	UILabel* _textLabel;
	UIButton* _cameraButton;
	UIButton* _microphoneButton;

}

@property (nonatomic,readonly) UIVisualEffectView * cameraBlurOverlay;                             //@synthesize cameraBlurOverlay=_cameraBlurOverlay - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIButton * cameraButton;                                            //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,readonly) UIButton * microphoneButton;                                        //@synthesize microphoneButton=_microphoneButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraPermissionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapCameraEnable;
-(void)didTapMicrophoneEnable;
-(void)refreshViewStateAnimated:(char)arg1 ;
-(UIButton *)cameraButton;
-(UIButton *)microphoneButton;
-(UIVisualEffectView *)cameraBlurOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumCameraPermissionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumCameraPermissionViewDelegate>)delegate;
-(UILabel *)textLabel;
@end

