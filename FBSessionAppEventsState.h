

@class NSMutableArray;

@interface FBSessionAppEventsState : NSObject {

	char _requestInFlight;
	NSMutableArray* _accumulatedEvents;
	NSMutableArray* _inFlightEvents;
	unsigned _numSkippedEventsDueToFullBuffer;

}

@property (retain) NSMutableArray * accumulatedEvents;                    //@synthesize accumulatedEvents=_accumulatedEvents - In the implementation block
@property (retain) NSMutableArray * inFlightEvents;                       //@synthesize inFlightEvents=_inFlightEvents - In the implementation block
@property (assign) unsigned numSkippedEventsDueToFullBuffer;              //@synthesize numSkippedEventsDueToFullBuffer=_numSkippedEventsDueToFullBuffer - In the implementation block
@property (assign) char requestInFlight;                                  //@synthesize requestInFlight=_requestInFlight - In the implementation block
-(void)addEvent:(id)arg1 isImplicit:(char)arg2 ;
-(unsigned)getAccumulatedEventCount;
-(char)requestInFlight;
-(NSMutableArray *)inFlightEvents;
-(NSMutableArray *)accumulatedEvents;
-(char)areAllEventsImplicit;
-(id)jsonEncodeInFlightEvents:(char)arg1 ;
-(unsigned)numSkippedEventsDueToFullBuffer;
-(void)setRequestInFlight:(char)arg1 ;
-(void)clearInFlightAndStats;
-(void)setNumSkippedEventsDueToFullBuffer:(unsigned)arg1 ;
-(void)setAccumulatedEvents:(NSMutableArray *)arg1 ;
-(void)setInFlightEvents:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
@end

