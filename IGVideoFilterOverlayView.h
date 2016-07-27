
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGImageFilter, IGSurfaceView;

@interface IGVideoFilterOverlayView : UIView {

	char _needsRemoval;
	IGImageFilter* _filter;
	IGSurfaceView* _filteredView;
	int _position;

}

@property (nonatomic,retain) IGImageFilter * filter;                    //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) IGSurfaceView * filteredView;              //@synthesize filteredView=_filteredView - In the implementation block
@property (assign,nonatomic) int position;                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char needsRemoval;                         //@synthesize needsRemoval=_needsRemoval - In the implementation block
-(id)initWithFilteredViewSize:(CGSize)arg1 ;
-(IGSurfaceView *)filteredView;
-(void)setFilteredView:(IGSurfaceView *)arg1 ;
-(char)needsRemoval;
-(void)setNeedsRemoval:(char)arg1 ;
-(IGImageFilter *)filter;
-(void)layoutSubviews;
-(void)setPosition:(int)arg1 ;
-(void)setFilter:(IGImageFilter *)arg1 ;
-(int)position;
@end

