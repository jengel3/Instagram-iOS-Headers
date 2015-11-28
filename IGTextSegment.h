
#import <UIKit/UIControl.h>

@class UILabel;

@interface IGTextSegment : UIControl {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setSelected:(char)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

