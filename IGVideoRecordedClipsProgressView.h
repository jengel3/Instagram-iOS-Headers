
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoInfo, NSMutableArray;

@interface IGVideoRecordedClipsProgressView : UIView {

	char _lastClipIsSelected;
	IGVideoInfo* _videoInfo;
	NSMutableArray* _clipBarViews;
	float _clipsDuration;

}

@property (nonatomic,retain) NSMutableArray * clipBarViews;              //@synthesize clipBarViews=_clipBarViews - In the implementation block
@property (assign,nonatomic) float clipsDuration;                        //@synthesize clipsDuration=_clipsDuration - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                    //@synthesize videoInfo=_videoInfo - In the implementation block
@property (assign,nonatomic) char lastClipIsSelected;                    //@synthesize lastClipIsSelected=_lastClipIsSelected - In the implementation block
+(float)defaultHeight;
-(IGVideoInfo *)videoInfo;
-(void)addClip:(id)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(char)lastClipIsSelected;
-(void)removeLastClip;
-(void)setLastClipIsSelected:(char)arg1 ;
-(void)onClipAdded:(id)arg1 ;
-(void)reloadAllClips;
-(NSMutableArray *)clipBarViews;
-(float)clipsDuration;
-(void)setClipsDuration:(float)arg1 ;
-(void)setClipBarViews:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

