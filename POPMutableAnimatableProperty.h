
#import <Instagram/POPAnimatableProperty.h>

@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	float threshold;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) id readBlock; 
@property (nonatomic,copy) id writeBlock; 
@property (assign,nonatomic) float threshold; 
-(void)setReadBlock:(id)arg1 ;
-(void)setWriteBlock:(id)arg1 ;
-(id)readBlock;
-(id)writeBlock;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
@end

