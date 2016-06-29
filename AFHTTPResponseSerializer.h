
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFURLResponseSerialization.h>

@class NSIndexSet, NSSet, NSString;

@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization> {

	unsigned _stringEncoding;
	NSIndexSet* _acceptableStatusCodes;
	NSSet* _acceptableContentTypes;

}

@property (assign,nonatomic) unsigned stringEncoding;                         //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSIndexSet * acceptableStatusCodes;              //@synthesize acceptableStatusCodes=_acceptableStatusCodes - In the implementation block
@property (nonatomic,retain) NSSet * acceptableContentTypes;                  //@synthesize acceptableContentTypes=_acceptableContentTypes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializer;
-(void)setStringEncoding:(unsigned)arg1 ;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setAcceptableStatusCodes:(NSIndexSet *)arg1 ;
-(void)setAcceptableContentTypes:(NSSet *)arg1 ;
-(NSIndexSet *)acceptableStatusCodes;
-(NSSet *)acceptableContentTypes;
-(char)validateResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)stringEncoding;
@end

