
#import <UIKit/UITableViewCell.h>

@class IGNewsFallbackCellView;

@interface IGNewsFallbackTableViewCell : UITableViewCell {

	IGNewsFallbackCellView* _cellView;

}

@property (nonatomic,readonly) IGNewsFallbackCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(IGNewsFallbackCellView *)cellView;
@end

