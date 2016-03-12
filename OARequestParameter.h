

@class NSString;

@interface OARequestParameter : NSObject {

	NSString* name;
	NSString* value;

}

@property (copy) NSString * name; 
@property (copy) NSString * value; 
+(id)requestParameter:(id)arg1 value:(id)arg2 ;
-(id)URLEncodedNameValuePair;
-(id)URLEncodedName;
-(id)URLEncodedValue;
-(char)isEqualToRequestParameter:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end

