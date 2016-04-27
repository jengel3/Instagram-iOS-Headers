
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class CALayer, UILabel, UIActivityIndicatorView;

@interface IGCommentLoadMoreCell : UICollectionViewCell {

	CALayer* _separatorLayer;
	UILabel* _textLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) CALayer * separatorLayer;                                 //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)setActivityAnimating:(char)arg1 ;
-(void)setupTextLabel;
-(void)setupActivityIndicator;
-(void)setupSeparatorLayer;
-(CALayer *)separatorLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UIActivityIndicatorView *)activityIndicator;
@end

