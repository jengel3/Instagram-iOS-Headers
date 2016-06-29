
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface IGPublicThreadTimeSeparatorCell : UICollectionViewCell {

	UILabel* _timeLabel;

}

@property (nonatomic,retain) UILabel * timeLabel;              //@synthesize timeLabel=_timeLabel - In the implementation block
+(float)cellBottomPadding;
+(float)heightForTimeSeparatorCell;
-(id)createTimeLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDate:(id)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
@end

