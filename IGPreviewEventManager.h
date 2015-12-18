

@class NSString;

@interface IGPreviewEventManager : NSObject {

	char _logged;
	char _committed;
	NSString* _source;
	NSString* _type;
	double _startTime;

}

@property (nonatomic,readonly) NSString * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isLogged,nonatomic) char logged;                    //@synthesize logged=_logged - In the implementation block
@property (assign,getter=isCommitted,nonatomic) char committed;              //@synthesize committed=_committed - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
+(void)logAction:(id)arg1 module:(id)arg2 ;
+(void)logShortcutAction:(id)arg1 ;
-(void)didDisappear;
-(void)logCommit;
-(char)isLogged;
-(void)setLogged:(char)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(NSString *)type;
-(NSString *)source;
-(double)startTime;
-(void)setCommitted:(char)arg1 ;
-(char)isCommitted;
-(id)initWithSource:(id)arg1 type:(id)arg2 ;
-(void)willAppear;
@end

