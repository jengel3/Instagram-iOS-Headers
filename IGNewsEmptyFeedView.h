
#import <UIKit/UIView.h>

@class IGSimpleButton;

@interface IGNewsEmptyFeedView : UIView {

	IGSimpleButton* _followButton;

}

@property (nonatomic,retain) IGSimpleButton * followButton;              //@synthesize followButton=_followButton - In the implementation block
-(IGSimpleButton *)followButton;
-(void)setFollowButton:(IGSimpleButton *)arg1 ;
-(id)noStoriesTextViewHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 ;
-(id)heartView;
-(id)initWithHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 showFollowButton:(char)arg4 ;
-(void)setFollowButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end

