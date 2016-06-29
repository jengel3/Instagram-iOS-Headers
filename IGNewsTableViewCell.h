
#import <UIKit/UITableViewCell.h>

@class IGNewsCellView;

@interface IGNewsTableViewCell : UITableViewCell {

	IGNewsCellView* _cellView;

}

@property (nonatomic,readonly) IGNewsCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(IGNewsCellView *)cellView;
@end

