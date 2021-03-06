//
//  FKFlickrPhotosetsEditMeta.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrPhotosetsEditMetaError) {
	FKFlickrPhotosetsEditMetaError_PhotosetNotFound = 1,		 /* The photoset id passed was not a valid photoset id or did not belong to the calling user. */
	FKFlickrPhotosetsEditMetaError_NoTitleSpecified = 2,		 /* No title parameter was passed in the request.  */
	FKFlickrPhotosetsEditMetaError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosetsEditMetaError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosetsEditMetaError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosetsEditMetaError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosetsEditMetaError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosetsEditMetaError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsEditMetaError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsEditMetaError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsEditMetaError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsEditMetaError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsEditMetaError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsEditMetaError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsEditMetaError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Modify the meta-data for a photoset.




*/
@interface FKFlickrPhotosetsEditMeta : NSObject <FKFlickrAPIMethod>

/* The id of the photoset to modify. */
@property (nonatomic, copy) NSString *photoset_id; /* (Required) */

/* The new title for the photoset. */
@property (nonatomic, copy) NSString *title; /* (Required) */

/* A description of the photoset. May contain limited html. */
@property (copy) NSString *description;


@end
