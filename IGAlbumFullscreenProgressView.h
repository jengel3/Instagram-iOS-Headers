
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumFullscreenProgressViewDelegate;
@class NSMutableArray;

@interface IGAlbumFullscreenProgressView : UIView {

	id<IGAlbumFullscreenProgressViewDelegate> _delegate;
	unsigned _numberOfSegments;
	NSMutableArray* _segmentViews;
	int _scrubbedSegmentIndex;

}

@property (nonatomic,retain) NSMutableArray * segmentViews;                                          //@synthesize segmentViews=_segmentViews - In the implementation block
@property (assign,nonatomic) int scrubbedSegmentIndex;                                               //@synthesize scrubbedSegmentIndex=_scrubbedSegmentIndex - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumFullscreenProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned numberOfSegments;                                              //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
-(void)scrubAtSegmentIndex:(int)arg1 ;
-(void)deselectScrubbedSegment;
-(void)setProgress:(float)arg1 forSegmentAtIndex:(unsigned)arg2 ;
-(void)layoutSegments;
-(int)scrubbedSegmentIndex;
-(void)setScrubbedSegmentIndex:(int)arg1 ;
-(void)setProgress:(float)arg1 forSegmentsAtIndexes:(id)arg2 ;
-(NSMutableArray *)segmentViews;
-(void)setSegmentViews:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumFullscreenProgressViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<IGAlbumFullscreenProgressViewDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)numberOfSegments;
-(void)setNumberOfSegments:(unsigned)arg1 ;
@end

