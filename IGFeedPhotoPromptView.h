
#import <UIKit/UIView.h>

@class IGSimpleButton, UIImageView, UILabel;

@interface IGFeedPhotoPromptView : UIView {

	IGSimpleButton* _actionButton;
	UIImageView* _imageView;
	UILabel* _messageLabel;

}

@property (nonatomic,readonly) IGSimpleButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                     //@synthesize messageLabel=_messageLabel - In the implementation block
-(IGSimpleButton *)actionButton;
-(id)init;
-(void)layoutSubviews;
-(UILabel *)messageLabel;
-(UIImageView *)imageView;
@end

