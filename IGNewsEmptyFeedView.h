
#import <UIKit/UIView.h>

@class IGSimpleButton, UIImage, UIImageView, IGCoreTextView;

@interface IGNewsEmptyFeedView : UIView {

	IGSimpleButton* _followButton;
	UIImage* _heartImage;
	UIImageView* _heartView;
	IGCoreTextView* _textView;

}

@property (nonatomic,readonly) IGSimpleButton * followButton;              //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * textView;                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIImageView * heartView;                    //@synthesize heartView=_heartView - In the implementation block
@property (nonatomic,readonly) UIImage * heartImage;                       //@synthesize heartImage=_heartImage - In the implementation block
-(IGSimpleButton *)followButton;
-(UIImageView *)heartView;
-(id)setUpHeartImage;
-(id)setUpHeartView;
-(id)noStoriesTextViewHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 ;
-(id)setUpFollowButton;
-(id)initWithHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 showFollowButton:(char)arg4 ;
-(void)setFollowButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)layoutSubviews;
-(IGCoreTextView *)textView;
-(UIImage *)heartImage;
@end

