
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGMainFeedUploadCellContentView;

@interface IGUploadStatusCell : UICollectionViewCell {

	IGMainFeedUploadCellContentView* _uploadView;

}

@property (nonatomic,readonly) IGMainFeedUploadCellContentView * uploadView;              //@synthesize uploadView=_uploadView - In the implementation block
-(IGMainFeedUploadCellContentView *)uploadView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

