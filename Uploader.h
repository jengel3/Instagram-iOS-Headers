

@class NSMutableDictionary, NSData;

@interface Uploader : NSObject {

	NSMutableDictionary* parameters_;
	NSData* minidumpContents_;
	NSData* logFileData_;
	NSMutableDictionary* serverDictionary_;
	NSMutableDictionary* socorroDictionary_;
	NSMutableDictionary* googleDictionary_;
	NSMutableDictionary* extraServerVars_;

}
+(id)readConfigurationDataFromFile:(id)arg1 ;
-(void)createServerParameterDictionaries;
-(void)translateConfigurationData:(id)arg1 ;
-(char)readMinidumpData;
-(char)readLogFileData;
-(void)addServerParameter:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryForServerType:(id)arg1 ;
-(id)urlParameterDictionary;
-(void)logUploadWithID:(const char*)arg1 ;
-(char)populateServerDictionary:(id)arg1 ;
-(void)handleNetworkResponse:(id)arg1 withError:(id)arg2 ;
-(void)uploadData:(id)arg1 name:(id)arg2 ;
-(id)initWithConfigFile:(const char*)arg1 ;
-(void)dealloc;
-(id)parameters;
-(void)report;
-(id)clientID;
-(id)initWithConfig:(id)arg1 ;
@end

