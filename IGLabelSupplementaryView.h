
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, CALayer;

@interface IGLabelSupplementaryView : UICollectionViewCell {

	UILabel* _textLabel;
	CALayer* _topSeparator;
	CALayer* _bottomSeparator;
	UIEdgeInsets _labelViewInsets;

}

@property (nonatomic,readonly) CALayer * topSeparator;                  //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,readonly) CALayer * bottomSeparator;               //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign,nonatomic) UIEdgeInsets labelViewInsets;              //@synthesize labelViewInsets=_labelViewInsets - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                     //@synthesize textLabel=_textLabel - In the implementation block
-(UIEdgeInsets)labelViewInsets;
-(void)setLabelViewInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(CALayer *)topSeparator;
-(CALayer *)bottomSeparator;
-(void)setConfig:(id)arg1 ;
@end

