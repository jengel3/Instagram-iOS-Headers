
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>

@class NSString;

@interface IGDirectPlaceholder : IGDirectContent {

	NSString* _title;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(id)contentTypeString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)digestDescription;
@end

