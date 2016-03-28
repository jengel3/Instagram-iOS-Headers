
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface IGHScrollAYMFBannerCell : UICollectionViewCell {

	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
@end

