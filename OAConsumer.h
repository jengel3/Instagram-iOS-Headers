

@class NSString;

@interface OAConsumer : NSObject {

	NSString* key;
	NSString* secret;

}

@property (copy) NSString * key; 
@property (copy) NSString * secret; 
-(char)isEqualToConsumer:(id)arg1 ;
-(id)initWithKey:(id)arg1 secret:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)secret;
-(void)setSecret:(NSString *)arg1 ;
@end

