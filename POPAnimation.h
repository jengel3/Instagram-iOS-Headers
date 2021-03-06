
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, POPAnimationTracer;

@interface POPAnimation : NSObject <NSCopying> {

	POPAnimationState* _state;
	SpringSolver<POP::Vector4<double> >Ref _solver;
	id _currentValue;
	NSArray* _progressMarkers;

}

@property (assign,nonatomic) SpringSolver<POP::Vector4<double> >Ref solver;              //@synthesize solver=_solver - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,copy,readonly) id currentValue;                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) NSArray * progressMarkers;                                    //@synthesize progressMarkers=_progressMarkers - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,readonly) POPAnimationTracer * tracer; 
@property (nonatomic,copy) id animationDidStartBlock; 
@property (nonatomic,copy) id animationDidReachToValueBlock; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,copy) id animationDidApplyBlock; 
@property (assign,nonatomic) char removedOnCompletion; 
@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) char autoreverses; 
@property (assign,nonatomic) int repeatCount; 
@property (assign,nonatomic) char repeatForever; 
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(id)animationDidReachToValueBlock;
-(void)setAnimationDidReachToValueBlock:(id)arg1 ;
-(id)animationDidApplyBlock;
-(void)setAnimationDidApplyBlock:(id)arg1 ;
-(char)repeatForever;
-(void)setRepeatForever:(char)arg1 ;
-(POPAnimationTracer *)tracer;
-(char)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(SpringSolver<POP::Vector4<double> >Ref)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >Ref)arg1 ;
-(NSArray *)progressMarkers;
-(void)setProgressMarkers:(NSArray *)arg1 ;
-(char)autoreverses;
-(id)currentValue;
-(char)isPaused;
-(char)removedOnCompletion;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)_init;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)repeatCount;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(int)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
-(double)beginTime;
-(void)setRemovedOnCompletion:(char)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setPaused:(char)arg1 ;
-(id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

