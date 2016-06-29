
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface IGCollectionViewSeeAllCell : UICollectionViewCell {

	UILabel* _label;
	UIView* _selectedOverlay;

}

@property (nonatomic,retain) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * selectedOverlay;              //@synthesize selectedOverlay=_selectedOverlay - In the implementation block
-(id)createSelectedOverlay;
-(UIView *)selectedOverlay;
-(void)setSelectedOverlay:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

