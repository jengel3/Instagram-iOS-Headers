
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface IGFeedItemHiddenWithReasonCell : UICollectionViewCell {

	UIImageView* _checkMarkImageView;
	UILabel* _thankYouLabel;
	UILabel* _improvementLabel;

}

@property (nonatomic,readonly) UIImageView * checkMarkImageView;              //@synthesize checkMarkImageView=_checkMarkImageView - In the implementation block
@property (nonatomic,readonly) UILabel * thankYouLabel;                       //@synthesize thankYouLabel=_thankYouLabel - In the implementation block
@property (nonatomic,readonly) UILabel * improvementLabel;                    //@synthesize improvementLabel=_improvementLabel - In the implementation block
-(UIImageView *)checkMarkImageView;
-(UILabel *)thankYouLabel;
-(UILabel *)improvementLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

