

@class NSMutableArray;

@interface FXBlurScheduler : NSObject {

	char _blurEnabled;
	char _updating;
	NSMutableArray* _views;
	unsigned _viewIndex;
	unsigned _updatesEnabled;

}

@property (nonatomic,retain) NSMutableArray * views;               //@synthesize views=_views - In the implementation block
@property (assign,nonatomic) unsigned viewIndex;                   //@synthesize viewIndex=_viewIndex - In the implementation block
@property (assign,nonatomic) unsigned updatesEnabled;              //@synthesize updatesEnabled=_updatesEnabled - In the implementation block
@property (assign,nonatomic) char blurEnabled;                     //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,nonatomic) char updating;                        //@synthesize updating=_updating - In the implementation block
+(id)sharedInstance;
-(unsigned)viewIndex;
-(void)setViewIndex:(unsigned)arg1 ;
-(void)updateAsynchronously;
-(char)blurEnabled;
-(void)setBlurEnabled:(char)arg1 ;
-(void)setUpdatesEnabled;
-(void)setUpdatesDisabled;
-(void)removeView:(id)arg1 ;
-(void)setUpdatesEnabled:(unsigned)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(id)init;
-(void)setViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)views;
-(void)addView:(id)arg1 ;
-(char)updating;
-(unsigned)updatesEnabled;
@end

