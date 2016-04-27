

@protocol NSObject;
@class NSString;

@interface IGTokenizerToken : NSObject {

	NSString* _token;
	id<NSObject> _data;

}

@property (nonatomic,readonly) NSString * token;               //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) id<NSObject> data;              //@synthesize data=_data - In the implementation block
-(id)initWithToken:(id)arg1 data:(id)arg2 ;
-(id<NSObject>)data;
-(NSString *)token;
@end

