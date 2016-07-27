
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IGAlbumFullscreenProgressView : UIView {

	unsigned _numberOfSegments;
	NSMutableArray* _segmentViews;

}

@property (nonatomic,retain) NSMutableArray * segmentViews;              //@synthesize segmentViews=_segmentViews - In the implementation block
@property (assign,nonatomic) unsigned numberOfSegments;                  //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
-(void)setProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(void)setProgress:(float)arg1 forSegmentsAtIndexes:(id)arg2 ;
-(NSMutableArray *)segmentViews;
-(void)setSegmentViews:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned)numberOfSegments;
-(void)setNumberOfSegments:(unsigned)arg1 ;
@end

