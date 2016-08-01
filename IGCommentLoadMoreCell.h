
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIActivityIndicatorView;

@interface IGCommentLoadMoreCell : UICollectionViewCell {

	char _enableCommentLikes;
	UILabel* _textLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) UILabel * textLabel;                                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) char enableCommentLikes;                                    //@synthesize enableCommentLikes=_enableCommentLikes - In the implementation block
-(void)setEnableCommentLikes:(char)arg1 ;
-(char)enableCommentLikes;
-(void)setActivityAnimating:(char)arg1 ;
-(void)setupTextLabel;
-(void)setupActivityIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UIActivityIndicatorView *)activityIndicator;
@end

