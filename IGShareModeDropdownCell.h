
#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface IGShareModeDropdownCell : UITableViewCell {

	char _checked;
	UIImageView* _checkmarkImageView;

}

@property (assign,getter=isChecked,nonatomic) char checked;                   //@synthesize checked=_checked - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(char)isChecked;
-(UIImageView *)checkmarkImageView;
@end

