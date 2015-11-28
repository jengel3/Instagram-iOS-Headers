
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGExploreSectionTextHeader : UIView {

	UILabel* _title;

}

@property (nonatomic,retain) UILabel * title;              //@synthesize title=_title - In the implementation block
-(void)layoutSubviews;
-(void)setTitle:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)title;
-(id)initWithText:(id)arg1 ;
@end

