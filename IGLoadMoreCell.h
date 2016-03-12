
#import <UIKit/UITableViewCell.h>

@class UIView;

@interface IGLoadMoreCell : UITableViewCell {

	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

