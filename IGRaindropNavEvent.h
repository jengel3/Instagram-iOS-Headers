
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropRankInfo;

@interface IGRaindropNavEvent : TBaseStruct {

	int __thrift_viewType;
	IGRaindropRankInfo* __thrift_rankInfo;

}
-(id)toDict;
-(id)initWithViewType:(int)arg1 rankInfo:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

