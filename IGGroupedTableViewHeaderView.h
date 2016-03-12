
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface IGGroupedTableViewHeaderView : UIView {

	UIView* _accessoryView;
	UILabel* _titleLabel;
	UILabel* _textLabel;

}
+(float)heightWithTitle:(id)arg1 text:(id)arg2 ;
+(float)textLabelXWithAccessoryViewWidth:(float)arg1 ;
+(float)textWidthWithAccessoryViewWidth:(float)arg1 ;
+(CGSize)titleLabelSizeWithTitle:(id)arg1 width:(float)arg2 ;
+(CGSize)textLabelSizeWithText:(id)arg1 width:(float)arg2 ;
+(float)minHeightForAccessoryViewHeight:(float)arg1 ;
+(float)heightWithTitle:(id)arg1 text:(id)arg2 accessoryViewOfSize:(CGSize)arg3 ;
-(id)initWithTitle:(id)arg1 text:(id)arg2 ;
-(void)configureTextLabelWithText:(id)arg1 ;
-(void)doLayout;
-(id)initWithTitle:(id)arg1 text:(id)arg2 accessoryView:(id)arg3 ;
-(void)configureTitleLabelWithTitle:(id)arg1 ;
@end

