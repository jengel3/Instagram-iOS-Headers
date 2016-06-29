
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGNewsFallbackCellView;

@interface IGNewsFallbackCollectionViewCell : UICollectionViewCell {

	IGNewsFallbackCellView* _cellView;

}

@property (nonatomic,readonly) IGNewsFallbackCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGNewsFallbackCellView *)cellView;
@end

