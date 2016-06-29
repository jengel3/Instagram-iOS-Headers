

@interface RCTDevMenu : NSObject {

	char _shakeToShow;
	char _profilingEnabled;
	char _liveReloadEnabled;
	char _hotLoadingEnabled;
	char _showFPS;

}

@property (assign,nonatomic) char shakeToShow;                    //@synthesize shakeToShow=_shakeToShow - In the implementation block
@property (assign,nonatomic) char profilingEnabled;               //@synthesize profilingEnabled=_profilingEnabled - In the implementation block
@property (assign,nonatomic) char liveReloadEnabled;              //@synthesize liveReloadEnabled=_liveReloadEnabled - In the implementation block
@property (assign,nonatomic) char hotLoadingEnabled;              //@synthesize hotLoadingEnabled=_hotLoadingEnabled - In the implementation block
@property (assign,nonatomic) char showFPS;                        //@synthesize showFPS=_showFPS - In the implementation block
-(void)addItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)shakeToShow;
-(void)setShakeToShow:(char)arg1 ;
-(char)profilingEnabled;
-(char)liveReloadEnabled;
-(void)setLiveReloadEnabled:(char)arg1 ;
-(char)hotLoadingEnabled;
-(void)setHotLoadingEnabled:(char)arg1 ;
-(char)showFPS;
-(void)setShowFPS:(char)arg1 ;
-(void)setProfilingEnabled:(char)arg1 ;
-(void)show;
-(void)reload;
-(void)addItem:(id)arg1 ;
@end

