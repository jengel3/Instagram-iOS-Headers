/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:07 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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

