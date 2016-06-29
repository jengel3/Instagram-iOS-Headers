
#import <UIKit/UIView.h>

@class IGSimpleButton, IGCoreTextView, UIImageView;

@interface IGNewsEmptyFeedView : UIView {

	IGSimpleButton* _followButton;
	IGCoreTextView* _textView;
	UIImageView* _heartView;

}

@property (nonatomic,readonly) IGSimpleButton * followButton;              //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * textView;                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIImageView * heartView;                    //@synthesize heartView=_heartView - In the implementation block
-(UIImageView *)heartView;
-(IGSimpleButton *)followButton;
-(id)setUpHeartView;
-(id)noStoriesTextViewHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 ;
-(id)setUpFollowButton;
-(id)initWithHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 showFollowButton:(char)arg4 ;
-(void)setFollowButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)layoutSubviews;
-(IGCoreTextView *)textView;
@end

