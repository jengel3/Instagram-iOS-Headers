
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGFeedItemMediaCell, IGImageProgressView, IGMediaOverlayIndicator;

@interface IGFeedMediaView : UIView {

	IGFeedItemMediaCell* _parentCellView;
	IGImageProgressView* _photoImageView;
	IGMediaOverlayIndicator* _indicator;

}

@property (assign,nonatomic,__weak) IGFeedItemMediaCell * parentCellView;              //@synthesize parentCellView=_parentCellView - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * photoImageView;                   //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,readonly) IGMediaOverlayIndicator * indicator;                    //@synthesize indicator=_indicator - In the implementation block
-(void)setParentCellView:(IGFeedItemMediaCell *)arg1 ;
-(IGMediaOverlayIndicator *)indicator;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGFeedItemMediaCell *)parentCellView;
@end

