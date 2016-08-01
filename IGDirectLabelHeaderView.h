
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface IGDirectLabelHeaderView : UIView {

	UILabel* _label;
	UIView* _lineView;

}

@property (nonatomic,readonly) UILabel * label;                //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * lineView;              //@synthesize lineView=_lineView - In the implementation block
-(id)initWithTitle:(id)arg1 bottomLine:(char)arg2 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(UIView *)lineView;
@end

