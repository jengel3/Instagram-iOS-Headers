
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIImageView, IGInsightsLoggingHelper;

@interface IGInsightsCenteredParagraphWithImageView : UIView {

	UILabel* _subtitleLabel;
	UIButton* _button;
	UIImageView* _imageView;
	IGInsightsLoggingHelper* _loggingHelper;
	CGRect _frame;

}

@property (nonatomic,readonly) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                  //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                       //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;              //@synthesize loggingHelper=_loggingHelper - In the implementation block
-(IGInsightsLoggingHelper *)loggingHelper;
-(id)initWithFrame:(CGRect)arg1 paragraphUnit:(id)arg2 loggingHelper:(id)arg3 ;
-(void)initializeSubtitleWithParagraphUnit:(id)arg1 ;
-(void)initializeImageViewWithParagraphUnit:(id)arg1 ;
-(void)initializeActionButtonWithParagraphUnit:(id)arg1 ;
-(void)onCreatePostButtonTapped:(id)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)subtitleLabel;
-(UIImageView *)imageView;
@end

