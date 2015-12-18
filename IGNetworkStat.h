

@class NSMutableArray, NSTimer;

@interface IGNetworkStat : NSObject {

	NSMutableArray* _rates;
	unsigned _insertionIndex;
	double _lastCaptureTime;
	unsigned _captureBytes;
	unsigned _previousCaptureBytes;
	float _currentAverage;
	double _averagedSum;
	int _samples;
	NSTimer* _sampler;
	int _currentRate;
	/*^block*/id _transferRateStatusChangeBlock;

}

@property (nonatomic,copy) id transferRateStatusChangeBlock;              //@synthesize transferRateStatusChangeBlock=_transferRateStatusChangeBlock - In the implementation block
+(id)sharedStat;
-(float)mostRecentAverageTransferRate;
-(id)mostRecentTransferRateString;
-(int)mostRecentTransferRate;
-(void)addTransferData:(unsigned)arg1 ;
-(id)transferRateStatusChangeBlock;
-(void)addTransferRate:(float)arg1 ;
-(void)notifyForNetworkStatChange;
-(void)sample:(id)arg1 ;
-(void)startSampling;
-(void)setTransferRateStatusChangeBlock:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)averageTransferRate;
-(void)stopSampling;
@end

