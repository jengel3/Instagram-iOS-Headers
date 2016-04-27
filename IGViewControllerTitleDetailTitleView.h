
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGViewControllerTitleDetailTitleView : UIView {

	UILabel* _title;
	UILabel* _detail;

}

@property (nonatomic,retain) UILabel * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * detail;              //@synthesize detail=_detail - In the implementation block
-(void)updateTitle:(id)arg1 ;
-(void)updateDetail:(id)arg1 ;
-(float)centerOffsetFromContainingNavigationBar;
-(UILabel *)detail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)title;
-(void)setDetail:(UILabel *)arg1 ;
-(void)setColorScheme:(unsigned)arg1 ;
@end

