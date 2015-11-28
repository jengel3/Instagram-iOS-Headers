
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGLabel;

@interface IGViewControllerTitleDetailTitleView : UIView {

	IGLabel* _title;
	IGLabel* _detail;

}

@property (nonatomic,retain) IGLabel * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) IGLabel * detail;              //@synthesize detail=_detail - In the implementation block
-(void)updateTitle:(id)arg1 ;
-(void)updateDetail:(id)arg1 ;
-(float)centerOffsetFromContainingNavigationBar;
-(IGLabel *)detail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(IGLabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGLabel *)title;
-(void)setDetail:(IGLabel *)arg1 ;
@end

