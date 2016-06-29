
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGNewsCellView;

@interface IGNewsCollectionViewCell : UICollectionViewCell {

	IGNewsCellView* _cellView;

}

@property (nonatomic,readonly) IGNewsCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGNewsCellView *)cellView;
@end

